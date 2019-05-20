import React, { Component } from 'react';

class Table extends Component {
    render(){
        return(
            <table>
                <thead>
                    <tr>
                        <td>Name</td>
                        <td>Job</td>
                    </tr>
                    </thead>
                    <tbody>
                        <tr>
                            <td>Charlie</td>
                            <td>Janitor</td>
                        </tr>
                        <tr>
                            <td>Mac</td>
                            <td>Bouncer</td>
                        </tr>
                        <tr>
                            <td></td>
                        </tr>
                    </tbody>
            </table>

        )
    }
}
export default Table